//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableArray, NSString;

@interface NUArticleExcerptHTMLStripper : NSObject <NSXMLParserDelegate>
{
    NSString *_strippedString;
    NSMutableArray *_parts;
}

@property(readonly, nonatomic) NSMutableArray *parts; // @synthesize parts=_parts;
@property(readonly, nonatomic) NSString *strippedString; // @synthesize strippedString=_strippedString;
- (void).cxx_destruct;
- (id)stripHTMLString:(id)arg1;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)initWithHTMLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

