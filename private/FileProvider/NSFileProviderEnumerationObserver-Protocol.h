//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/NSObject-Protocol.h>

@class NSArray, NSData, NSError;

@protocol NSFileProviderEnumerationObserver <NSObject>
- (void)finishEnumeratingWithError:(NSError *)arg1;
- (void)finishEnumeratingUpToPage:(NSData *)arg1;
- (void)didEnumerateItems:(NSArray *)arg1;
@end

