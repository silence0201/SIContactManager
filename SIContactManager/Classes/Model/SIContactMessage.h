//
//  SIContactMessage.h
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import <Contacts/Contacts.h>

NS_ASSUME_NONNULL_BEGIN
/// 即时通讯
@interface SIContactMessage : NSObject

/// 即时通讯名字（QQ）
@property (nonatomic, copy) NSString *service;

/// 账号
@property (nonatomic, copy) NSString *userName;

/// 便利构造 （Contacts）
/// @param labeledValue 标签和值
- (instancetype)initWithLabeledValue:(CNLabeledValue *)labeledValue;

@end

NS_ASSUME_NONNULL_END
