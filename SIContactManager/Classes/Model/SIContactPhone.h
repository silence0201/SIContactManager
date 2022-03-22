//
//  SIContactPhone.h
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import <Contacts/Contacts.h>

NS_ASSUME_NONNULL_BEGIN

@interface SIContactPhone : NSObject

/// 电话
@property (nonatomic, copy) NSString *phone;

/// 标签
@property (nonatomic, copy) NSString *label;

/// 便利构造 （Contacts）
/// @param labeledValue 标签和值
- (instancetype)initWithLabeledValue:(CNLabeledValue *)labeledValue;

@end

NS_ASSUME_NONNULL_END
