//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXMediaEvent.h>

@interface SXMediaEngageCompleteEvent : SXMediaEvent
{
    double _mediaFrameRate;
    double _mediaDuration;
    double _mediaTimePlayed;
}

@property(nonatomic) double mediaTimePlayed; // @synthesize mediaTimePlayed=_mediaTimePlayed;
@property(nonatomic) double mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property(nonatomic) double mediaFrameRate; // @synthesize mediaFrameRate=_mediaFrameRate;

@end

