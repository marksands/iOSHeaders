//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>

#import <MediaPlaybackCore/MPCPlayerFeedbackCommand-Protocol.h>

@class NSString;

@interface _MPCPlayerFeedbackCommand : _MPCPlayerItemCommand <MPCPlayerFeedbackCommand>
{
    _Bool _value;
    unsigned int _command;
    NSString *_localizedTitle;
    NSString *_localizedShortTitle;
    long long _presentationStyle;
}

@property(nonatomic) _Bool value; // @synthesize value=_value;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) NSString *localizedShortTitle; // @synthesize localizedShortTitle=_localizedShortTitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) unsigned int command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)changeValue:(_Bool)arg1;
- (id)initWithResponse:(id)arg1 mediaRemoteCommand:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

