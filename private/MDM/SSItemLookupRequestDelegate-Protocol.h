//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSRequestDelegate.h"

@class NSArray, SSItemLookupRequest;

@protocol SSItemLookupRequestDelegate <SSRequestDelegate>

@optional
- (void)itemLookupRequest:(SSItemLookupRequest *)arg1 didFindItems:(NSArray *)arg2;
@end

