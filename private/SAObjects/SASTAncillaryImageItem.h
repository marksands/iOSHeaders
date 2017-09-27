//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SASTTemplateItem.h"

@class NSString, SAUIDecoratedText, SAUINanoImageResource;

@interface SASTAncillaryImageItem : AceObject <SASTTemplateItem>
{
}

+ (id)ancillaryImageItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)ancillaryImageItem;
@property(retain, nonatomic) SAUIDecoratedText *title;
@property(retain, nonatomic) SAUIDecoratedText *subtitle;
@property(retain, nonatomic) SAUINanoImageResource *imageResource;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

