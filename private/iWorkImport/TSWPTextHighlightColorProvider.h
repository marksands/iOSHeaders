//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKCGColorProvider.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSWPTextHighlightColorProvider : NSObject <TSKCGColorProvider>
{
    NSArray *_highlights;
}

@property(retain, nonatomic) NSArray *highlights; // @synthesize highlights=_highlights;
- (void).cxx_destruct;
- (struct CGColor *)cgColor;
- (id)initWithHighlights:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

