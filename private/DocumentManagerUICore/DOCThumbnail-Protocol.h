//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperation, UIImage;

@protocol DOCThumbnail <NSObject>
@property(readonly) _Bool hasFinishedTryingToFetchCorrectThumbnail;
@property(readonly, nonatomic) NSOperation *operation;
@property(readonly, nonatomic) UIImage *thumbnail;
@property(readonly, nonatomic) _Bool isRepresentativeIcon;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)scheduleUpdateIfNeeded;
- (void)removeListener:(id <DOCThumbnailListener>)arg1;
- (void)addListener:(id <DOCThumbnailListener>)arg1;
@end

