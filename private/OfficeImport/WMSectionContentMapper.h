//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDText;

__attribute__((visibility("hidden")))
@interface WMSectionContentMapper : CMMapper
{
    WDText *wdText;
}

- (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithWDText:(id)arg1 parent:(id)arg2;
- (void)mapTextFrameStyleTo:(id)arg1 withState:(id)arg2;
- (void)mapTextFrameAt:(id)arg1 withState:(id)arg2;
- (id)paragraphAtIndex:(unsigned long long)arg1;
- (void)updateTextFrameState:(id)arg1 atIndex:(unsigned long long)arg2;

@end

