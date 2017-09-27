//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, StockUpdateManager;

@protocol StockUpdateObserver <NSObject>

@optional
- (void)stockUpdateManager:(StockUpdateManager *)arg1 failedToUpdateStocks:(NSArray *)arg2 updates:(long long)arg3 error:(NSError *)arg4;
- (void)stockUpdateManager:(StockUpdateManager *)arg1 didUpdateStocks:(NSArray *)arg2 updates:(long long)arg3;
- (void)stockUpdateManager:(StockUpdateManager *)arg1 didRequestUpdateForStocks:(NSArray *)arg2 updates:(long long)arg3;
@end

