//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol ContentBlockerLoading
- (void)getStateOfContentBlockerWithIdentifier:(NSString *)arg1 reply:(void (^)(SFContentBlockerState *, NSError *))arg2;
- (void)removeContentBlockerWithIdentifier:(NSString *)arg1;
- (void)loadContentBlockerWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
@end

