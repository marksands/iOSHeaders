//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKeyValueCollection, NSDictionary;

@protocol IMKeyValueCollectionDelegate <NSObject>

@optional
- (void)keyValueCollection:(IMKeyValueCollection *)arg1 didUpdateValues:(NSDictionary *)arg2;
- (void)keyValueCollection:(IMKeyValueCollection *)arg1 willUpdateValues:(NSDictionary *)arg2;
@end
