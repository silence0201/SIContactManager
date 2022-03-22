//
//  SIContactAddress.m
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import "SIContactAddress.h"

@implementation SIContactAddress

- (instancetype)initWithLabeledValue:(CNLabeledValue *)labeledValue {
    if (self = [super init]) {
        CNPostalAddress *addressValue = labeledValue.value;
        self.label = [CNLabeledValue localizedStringForLabel:labeledValue.label];
        self.street = addressValue.street;
        self.state = addressValue.state;
        self.city = addressValue.city;
        self.postalCode = addressValue.postalCode;
        self.country = addressValue.country;
        self.ISOCountryCode = addressValue.ISOCountryCode;
        
        self.formatterAddress = [CNPostalAddressFormatter stringFromPostalAddress:addressValue style:CNPostalAddressFormatterStyleMailingAddress];
    }
    return self;
}

@end
