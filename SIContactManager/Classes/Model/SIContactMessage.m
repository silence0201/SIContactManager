//
//  SIContactMessage.m
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import "SIContactMessage.h"

@implementation SIContactMessage

- (instancetype)initWithLabeledValue:(CNLabeledValue *)labeledValue {
    if (self = [super init]) {
        CNInstantMessageAddress *messageValue = labeledValue.value;
        self.service = messageValue.service;
        self.userName = messageValue.username;
    }
    return self;
}

@end
