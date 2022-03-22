//
//  SIContactSocialProfile.m
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import "SIContactSocialProfile.h"

@implementation SIContactSocialProfile

- (instancetype)initWithLabeledValue:(CNLabeledValue *)labeledValue {
    if (self = [super init]) {
        CNSocialProfile *socialValue = labeledValue.value;
        self.service = socialValue.service;
        self.username = socialValue.username;
        self.urlString = socialValue.urlString;
    }
    return self;
}

@end
