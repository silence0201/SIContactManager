//
//  NSString+SIContanctExtension.h
//  SIContactManager
//
//  Created by Silence on 2022/3/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (SIContanctExtension)

- (NSString *)si_filterSpecial;

- (NSString *)si_pinyin;

@end

NS_ASSUME_NONNULL_END
