//
//  SIContactPhone.m
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import "SIContactPhone.h"
#import "NSString+SIContanctExtension.h"

@implementation SIContactPhone

- (instancetype)initWithLabeledValue:(CNLabeledValue *)labeledValue {
    if (self = [super init]) {
        CNPhoneNumber *phoneValue = labeledValue.value;
        NSString *phoneNumber = phoneValue.stringValue;
        self.phone = [phoneNumber si_filterSpecial];
        self.label = [CNLabeledValue localizedStringForLabel:labeledValue.label];
    }
    return self;
}

@end
