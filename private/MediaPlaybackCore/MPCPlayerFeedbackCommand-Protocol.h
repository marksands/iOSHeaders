//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlayerCommandRequest, NSString;

@protocol MPCPlayerFeedbackCommand <MPCPlayerCommand>
@property(readonly, nonatomic) _Bool value;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, copy, nonatomic) NSString *localizedShortTitle;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
- (MPCPlayerCommandRequest *)changeValue:(_Bool)arg1;
@end

