//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TSUWarning;

__attribute__((visibility("hidden")))
@interface TSWPCharacterStyleValidateFontResult : NSObject
{
    int _bold;
    int _italic;
    NSString *_mappedName;
    TSUWarning *_warning;
}

@property(nonatomic) int italic; // @synthesize italic=_italic;
@property(nonatomic) int bold; // @synthesize bold=_bold;
@property(retain, nonatomic) TSUWarning *warning; // @synthesize warning=_warning;
@property(retain, nonatomic) NSString *mappedName; // @synthesize mappedName=_mappedName;
- (void).cxx_destruct;

@end

