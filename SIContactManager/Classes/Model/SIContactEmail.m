//
//  SIContactEmail.m
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import "SIContactEmail.h"

@implementation SIContactEmail

- (instancetype)initWithLabeledValue:(CNLabeledValue *)labeledValue {
    if (self = [super init]) {
        self.label = [CNLabeledValue localizedStringForLabel:labeledValue.label];
        self.email = labeledValue.value;
    }
    return self;
}

@end
