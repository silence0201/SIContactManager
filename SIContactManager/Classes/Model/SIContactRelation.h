//
//  SIContactRelation.h
//  SIContactManager
//
//  Created by Silence on 2022/3/23.
//

#import <Contacts/Contacts.h>

NS_ASSUME_NONNULL_BEGIN

/// 关联人
@interface SIContactRelation : NSObject

/// 标签（父亲，朋友等）
@property (nonatomic, copy) NSString *label;

/// 名字
@property (nonatomic, copy) NSString *name;

/// 便利构造 （Contacts）
/// @param labeledValue 标签和值
- (instancetype)initWithLabeledValue:(CNLabeledValue *)labeledValue;

@end

NS_ASSUME_NONNULL_END
