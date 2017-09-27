//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IPFeature : NSObject
{
    double _confidence;
    double _weight;
    NSString *_textUnit;
    struct _NSRange _matchRange;
}

@property(copy) NSString *textUnit; // @synthesize textUnit=_textUnit;
@property struct _NSRange matchRange; // @synthesize matchRange=_matchRange;
@property double weight; // @synthesize weight=_weight;
@property double confidence; // @synthesize confidence=_confidence;
- (void).cxx_destruct;
- (_Bool)isMatchStringInsideQuotationMarks;
- (id)description;
- (id)matchString;

@end

