//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVItem, MPTimeMarker;

@interface MPAVItemTimeMarkerEvent : NSObject
{
    MPAVItem *_AVItem;
    MPTimeMarker *_chapterMarker;
    MPTimeMarker *_artworkMarker;
    MPTimeMarker *_URLMarker;
    MPTimeMarker *_closedCaptionMarker;
}

@property(retain, nonatomic) MPTimeMarker *closedCaptionMarker; // @synthesize closedCaptionMarker=_closedCaptionMarker;
@property(retain, nonatomic) MPTimeMarker *URLMarker; // @synthesize URLMarker=_URLMarker;
@property(retain, nonatomic) MPTimeMarker *artworkMarker; // @synthesize artworkMarker=_artworkMarker;
@property(retain, nonatomic) MPTimeMarker *chapterMarker; // @synthesize chapterMarker=_chapterMarker;
@property(retain, nonatomic) MPAVItem *AVItem; // @synthesize AVItem=_AVItem;
- (void).cxx_destruct;
- (id)crossedMarkerOfType:(int)arg1;
- (id)initWithTimeMarkerNotificationUserInfo:(id)arg1;

@end

