//
//  TCF2_Encoder.h
//  TCF_2_String_Encode
//
//  Copyright © 2020 OneTrust, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TCF2Encoder : NSObject

+ (instancetype)sharedInstance;

- (NSArray<NSString *> *)tcf_localstorage_keys;
- (NSString *) convertBinaryStringToBase64:(NSString *)binaryString;
- (NSInteger)getMaxIntFromList:(NSArray*)items;
- (NSString *)encode_FromItemsLookup:(NSArray*)items toLength:(NSInteger)length;
- (NSString *)encode_Integer:(NSInteger)value toLength:(NSInteger)length;
- (NSString *)encode_twoCharString:(NSString*)value;
- (NSString *)encode_Date:(NSDate *)value toLength:(NSInteger)length;
- (NSArray *)organizePublisherRestrictions:(NSDictionary *)publisherRestrictions;

@end

NS_ASSUME_NONNULL_END
