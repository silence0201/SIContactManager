//
//  SIContact.h
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import <Contacts/Contacts.h>
#import "SIContactPhone.h"
#import "SIContactEmail.h"
#import "SIContactAddress.h"
#import "SIContactBirthday.h"
#import "SIContactMessage.h"
#import "SIContactSocialProfile.h"
#import "SIContactRelation.h"
#import "SIContactUrlAddress.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, SIContactType) {
    SIContactTypePerson = 0,
    SIContactTypeOrigination,
};

@interface SIContact : NSObject

/// 联系人类型
@property (nonatomic) SIContactType contactType;

/// 姓名
@property (nonatomic, copy) NSString *fullName;

/// 姓名拼音
@property (nonatomic, copy) NSString *pinyin;

/// 姓
@property (nonatomic, copy) NSString *familyName;

/// 名
@property (nonatomic, copy) NSString *givenName;

/// 姓名前缀
@property (nonatomic, copy) NSString *namePrefix;

/// 姓名后缀
@property (nonatomic, copy) NSString *nameSuffix;

/// 昵称
@property (nonatomic, copy) NSString *nickname;

/// 中间名
@property (nonatomic, copy) NSString *middleName;

/// 公司
@property (nonatomic, copy) NSString *organizationName;

/// 部门
@property (nonatomic, copy) NSString *departmentName;

/// 职位
@property (nonatomic, copy) NSString *jobTitle;

/// 备注
@property (nonatomic, copy) NSString *note;

/// 名的拼音或音标
@property (nonatomic, copy) NSString *phoneticGivenName;

/// 中间名的拼音或音标
@property (nonatomic, copy) NSString *phoneticMiddleName;

/// 姓的拼音或音标
@property (nonatomic, copy) NSString *phoneticFamilyName;

/// 头像 Data
@property (nonatomic, copy) NSData *imageData;

/// 头像图片
@property (nonatomic, strong) UIImage *image;

/// 头像的缩略图 Data
@property (nonatomic, copy) NSData *thumbnailImageData;

/// 头像缩略图片
@property (nonatomic, strong) UIImage *thumbnailImage;

/// 获取创建当前联系人的时间
@property (nonatomic, strong) NSDate *creationDate;

/// 获取最近一次修改当前联系人的时间
@property (nonatomic, strong) NSDate *modificationDate;

/// 电话号码数组
@property (nonatomic, copy) NSArray <SIContactPhone *> *phones;

/// 邮箱数组
@property (nonatomic, copy) NSArray <SIContactEmail *> *emails;

/// 地址数组
@property (nonatomic, copy) NSArray <SIContactAddress *> *addresses;

/// 生日对象
@property (nonatomic, strong) SIContactBirthday *birthday;

/// 即时通讯数组
@property (nonatomic, copy) NSArray <SIContactMessage *> *messages;

/// 社交数组
@property (nonatomic, copy) NSArray <SIContactSocialProfile *> *socials;

/// 关联人数组
@property (nonatomic, copy) NSArray <SIContactRelation *> *relations;

///  url数组
@property (nonatomic, copy) NSArray <SIContactUrlAddress *> *urls;

/// 便利构造 （Contacts）
/// @param contact 通讯录
- (instancetype)initWithCNContact:(CNContact *)contact;

@end

NS_ASSUME_NONNULL_END
