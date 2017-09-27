//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, WKBrowsingContextHandle;

@protocol SFReaderWebProcessControllerProtocol <NSObject>
- (void)prepareReaderContentForPrinting;
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (void)setReaderTheme:(NSString *)arg1;
- (void)setReaderFont:(NSString *)arg1;
- (void)collectReaderContentForMail;
- (void)collectReadingListItemInfoWithBookmarkID:(NSNumber *)arg1;
- (void)setInitalArticleScrollPositionAsDictionary:(NSDictionary *)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(NSDictionary *)arg2 isViewingArchive:(_Bool)arg3;
- (void)loadNewReaderArticle;
- (void)didCreateReaderPageContextHandle:(WKBrowsingContextHandle *)arg1;
- (void)prepareToTransitionToReader;
@end

