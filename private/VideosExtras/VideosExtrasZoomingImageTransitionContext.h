//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VideosExtrasBorderedImageView;

@interface VideosExtrasZoomingImageTransitionContext : NSObject
{
    _Bool _interactive;
    VideosExtrasBorderedImageView *_zoomingImageView;
    unsigned long long _itemIndex;
    unsigned long long _appearState;
}

@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic) unsigned long long appearState; // @synthesize appearState=_appearState;
@property(nonatomic) unsigned long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property(retain, nonatomic) VideosExtrasBorderedImageView *zoomingImageView; // @synthesize zoomingImageView=_zoomingImageView;
- (void).cxx_destruct;
- (id)initWithZoomingImageView:(id)arg1 itemIndex:(unsigned long long)arg2 appearState:(unsigned long long)arg3 isInteractive:(_Bool)arg4;

@end
