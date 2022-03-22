//
//  SIContactBirthday.m
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import "SIContactBirthday.h"

@implementation SIContactBirthday

- (instancetype)initWithCNContact:(CNContact *)contact {
    if (self = [super init]) {
        if ([contact isKeyAvailable:CNContactBirthdayKey]) {
            self.brithdayDate = contact.birthday.date;
        }
        
        if ([contact isKeyAvailable:CNContactNonGregorianBirthdayKey]) {
            self.calendarIdentifier = contact.nonGregorianBirthday.calendar.calendarIdentifier;
            self.era = contact.nonGregorianBirthday.era;
            self.day = contact.nonGregorianBirthday.day;
            self.month = contact.nonGregorianBirthday.month;
            self.year = contact.nonGregorianBirthday.year;
        }
    }
    return self;
}

@end
