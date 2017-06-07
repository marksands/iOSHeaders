//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPNowPlayingInfoLanguageOption, NSArray;

@interface MPNowPlayingInfoLanguageOptionGroup : NSObject
{
    void *_mrLanguageOptionGroup;
}

@property(readonly, nonatomic) void *mrLanguageOptionGroup; // @synthesize mrLanguageOptionGroup=_mrLanguageOptionGroup;
@property(readonly, nonatomic) _Bool allowEmptySelection; // @dynamic allowEmptySelection;
@property(readonly, nonatomic) MPNowPlayingInfoLanguageOption *defaultLanguageOption; // @dynamic defaultLanguageOption;
@property(readonly, nonatomic) NSArray *languageOptions; // @dynamic languageOptions;
- (void)dealloc;
- (id)initWithMRLanguageOptionGroup:(void *)arg1;
- (id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowEmptySelection:(_Bool)arg3;

@end
