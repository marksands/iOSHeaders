//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolCSSStyleSheetBody : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSArray *rules;
@property(copy, nonatomic) NSString *styleSheetId;
- (id)initWithStyleSheetId:(id)arg1 rules:(id)arg2;

@end

