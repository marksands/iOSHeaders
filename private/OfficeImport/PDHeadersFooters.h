//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PDHeadersFooters : NSObject
{
    _Bool mHasDateTime;
    _Bool mHasNowDateTime;
    _Bool mHasUserDateTime;
    _Bool mHasSlideNumber;
    _Bool mHasHeader;
    _Bool mHasFooter;
    int mDateTimeFormat;
    NSString *mUserDateTime;
    NSString *mHeader;
    NSString *mFooter;
}

- (void)setFooter:(id)arg1;
- (id)footer;
- (void)setHeader:(id)arg1;
- (id)header;
- (void)setUserDateTime:(id)arg1;
- (id)userDateTime;
- (void)setHasFooter:(_Bool)arg1;
- (_Bool)hasFooter;
- (void)setHasHeader:(_Bool)arg1;
- (_Bool)hasHeader;
- (void)setHasSlideNumber:(_Bool)arg1;
- (_Bool)hasSlideNumber;
- (void)setHasUserDateTime:(_Bool)arg1;
- (_Bool)hasUserDateTime;
- (void)setHasNowDateTime:(_Bool)arg1;
- (_Bool)hasNowDateTime;
- (void)setHasDateTime:(_Bool)arg1;
- (_Bool)hasDateTime;
- (void)dealloc;

@end

