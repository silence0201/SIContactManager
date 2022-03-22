//
//  SIContactAddress.h
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import <Contacts/Contacts.h>

NS_ASSUME_NONNULL_BEGIN

@interface SIContactAddress : NSObject

/// 标签
@property (nonatomic, copy) NSString *label;

/// 街道
@property (nonatomic, copy) NSString *street;

/// 城市
@property (nonatomic, copy) NSString *city;

/// 州
@property (nonatomic, copy) NSString *state;

/// 邮政编码
@property (nonatomic, copy) NSString *postalCode;

/// 城市
@property (nonatomic, copy) NSString *country;

/// 国家代码
@property (nonatomic, copy) NSString *ISOCountryCode;

/// 标准格式化地址
@property (nonatomic, copy) NSString *formatterAddress NS_AVAILABLE_IOS(9_0);


/// 便利构造 （AddressBook）
/// @param labeledValue 标签和值
- (instancetype)initWithLabeledValue:(CNLabeledValue *)labeledValue;

@end

NS_ASSUME_NONNULL_END
