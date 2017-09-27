//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKLockupElement, NSString, UIImage;

@interface VideosExtrasVideoTimelineEvent : NSObject
{
    IKLockupElement *_lockup;
    UIImage *_image;
    _Bool _isFirstEvent;
    double _offset;
    double _duration;
    VideosExtrasVideoTimelineEvent *_previous;
    VideosExtrasVideoTimelineEvent *_next;
}

@property(nonatomic) __weak VideosExtrasVideoTimelineEvent *next; // @synthesize next=_next;
@property(readonly, nonatomic) __weak VideosExtrasVideoTimelineEvent *previous; // @synthesize previous=_previous;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool isFirstEvent; // @synthesize isFirstEvent=_isFirstEvent;
- (void).cxx_destruct;
- (id)description;
- (void)loadImage:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *subHeader;
@property(readonly, nonatomic) NSString *title;
- (id)initWithElement:(id)arg1 prev:(id)arg2;

@end

