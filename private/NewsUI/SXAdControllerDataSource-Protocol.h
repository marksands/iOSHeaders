//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SXAdController, SXAdRequest;

@protocol SXAdControllerDataSource <NSObject>

@optional
- (void (^)(void))adController:(SXAdController *)arg1 requiresAdForRequest:(SXAdRequest *)arg2 completionBlock:(void (^)(SXAdResponse *, NSError *))arg3;
@end
