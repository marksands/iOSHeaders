//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXCollectionFetchOperation;

@protocol PXCollectionFetchOperationDelegate <NSObject>

@optional
- (void)collectionFetchOperationDidCancel:(PXCollectionFetchOperation *)arg1;
- (void)collectionFetchOperationDidComplete:(PXCollectionFetchOperation *)arg1;
@end

