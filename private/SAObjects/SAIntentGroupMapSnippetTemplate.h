//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString, SAIntentGroupDetailLabelTemplateComponent, SALocation, SAUIColor;

@interface SAIntentGroupMapSnippetTemplate : SAIntentGroupSnippetTemplate
{
}

+ (id)mapSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mapSnippetTemplate;
@property(retain, nonatomic) id <SAIntentGroupSetMapLocation> updateLocationCommand;
@property(copy, nonatomic) NSString *mapSize;
@property(retain, nonatomic) SALocation *location;
@property(nonatomic) _Bool interactive;
@property(retain, nonatomic) SAIntentGroupDetailLabelTemplateComponent *detailLabelComponent;
@property(retain, nonatomic) SAUIColor *color;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

