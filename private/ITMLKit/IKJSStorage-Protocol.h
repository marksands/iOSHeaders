//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSString;

@protocol IKJSStorage <JSExport>
@property(readonly, nonatomic) unsigned long long length;
- (void)clear;
- (void)removeItem:(NSString *)arg1;
- (void)setItem:(NSString *)arg1:(NSString *)arg2;
- (NSString *)getItem:(NSString *)arg1;
- (NSString *)key:(unsigned long long)arg1;
@end

