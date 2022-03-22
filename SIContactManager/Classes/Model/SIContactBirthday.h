//
//  SIContactBirthday.h
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import <Contacts/Contacts.h>

NS_ASSUME_NONNULL_BEGIN
/// 生日
@interface SIContactBirthday : NSObject

/// 生日日期
@property (nonatomic, strong) NSDate *brithdayDate;

/// 农历标识符（chinese）
@property (nonatomic, copy) NSString *calendarIdentifier;

/// 纪元
@property (nonatomic, assign) NSInteger era;

/// 年
@property (nonatomic, assign) NSInteger year;

/// 月
@property (nonatomic, assign) NSInteger month;

/// 日
@property (nonatomic, assign) NSInteger day;


/// 便利构造 （Contacts）
/// @param contact 通讯录
- (instancetype)initWithCNContact:(CNContact *)contact;

@end

NS_ASSUME_NONNULL_END
