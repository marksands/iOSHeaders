//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@class NSArray, TLKMultilineText;

@interface TLKDetailsSection : TLKObject
{
    TLKMultilineText *_title;
    NSArray *_details;
}

@property(retain) NSArray *details; // @synthesize details=_details;
@property(retain) TLKMultilineText *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)observableProperties;

@end

