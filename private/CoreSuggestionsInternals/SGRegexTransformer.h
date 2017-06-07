//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSString, SGRe2;

@interface SGRegexTransformer : NSObject <PMLTransformerProtocol>
{
    NSString *_mapping;
    SGRe2 *_regex;
}

+ (id)withRegex:(id)arg1 andMapping:(id)arg2;
@property(retain) SGRe2 *regex; // @synthesize regex=_regex;
@property(retain) NSString *mapping; // @synthesize mapping=_mapping;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (id)initWithRegex:(id)arg1 andMapping:(id)arg2;

@end

