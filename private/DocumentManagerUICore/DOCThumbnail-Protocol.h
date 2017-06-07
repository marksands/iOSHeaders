//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocumentManagerUICore/NSObject-Protocol.h>

@class NSOperation, UIImage;
@protocol DOCThumbnailListener;

@protocol DOCThumbnail <NSObject>
@property(readonly, nonatomic) NSOperation *operation;
@property(readonly, nonatomic) UIImage *thumbnail;
@property(readonly, nonatomic) _Bool isRepresentativeIcon;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)removeListener:(id <DOCThumbnailListener>)arg1;
- (void)addListener:(id <DOCThumbnailListener>)arg1;
@end

