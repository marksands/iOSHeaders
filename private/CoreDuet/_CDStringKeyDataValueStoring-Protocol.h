//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSString;

@protocol _CDStringKeyDataValueStoring
- (NSArray *)allKeys;
- (_Bool)removeDataForKeys:(NSArray *)arg1;
- (_Bool)removeDataForKey:(NSString *)arg1;
- (_Bool)setData:(NSData *)arg1 forKey:(NSString *)arg2 completionBlock:(void (^)(_Bool, NSError *))arg3;
- (_Bool)setData:(NSData *)arg1 forKey:(NSString *)arg2;
- (NSData *)dataForKey:(NSString *)arg1;
@end

