//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class NSArray, NSString;

@protocol INIntentSlotDescriptionExport <NSObject, JSExport>
@property(readonly, copy, nonatomic) NSArray *resolveSelectorStrings;
@property(readonly, nonatomic) SEL deprecatedResolveSelector;
@property(readonly, nonatomic) SEL resolveSelector;
@property(readonly, nonatomic) _Bool isPrivate;
@property(readonly, nonatomic) _Bool isExtended;
@property(readonly, nonatomic) long long valueStyle;
@property(readonly, nonatomic) long long valueType;
@property(readonly, copy, nonatomic) NSString *dataPropertyName;
@property(readonly, copy, nonatomic) NSString *facadePropertyName;
@property(readonly, nonatomic) unsigned long long tag;
@property(readonly, copy, nonatomic) NSString *name;
- (id)init;
@end

