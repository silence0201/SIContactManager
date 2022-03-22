//
//  SIContactUrlAddress.m
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import "SIContactUrlAddress.h"

@implementation SIContactUrlAddress

- (instancetype)initWithLabeledValue:(CNLabeledValue *)labeledValue {
    if (self = [super init]) {
        self.label = [CNLabeledValue localizedStringForLabel:labeledValue.label];
        self.urlString = labeledValue.value;
    }
    return self;
}

@end
