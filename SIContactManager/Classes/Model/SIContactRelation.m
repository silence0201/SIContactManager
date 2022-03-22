//
//  SIContactRelation.m
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import "SIContactRelation.h"

@implementation SIContactRelation

- (instancetype)initWithLabeledValue:(CNLabeledValue *)labeledValue {
    if (self = [super init]) {
        CNContactRelation *relationValue = labeledValue.value;
        self.label = [CNLabeledValue localizedStringForLabel:labeledValue.label];;
        self.name = relationValue.name;
    }
    return self;
}

@end
