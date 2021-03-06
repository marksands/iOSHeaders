//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TSPObjectContext, TSPUnknownContent;

@interface TSPObject : NSObject
{
    long long _identifier;
    long long _modifyObjectToken;
    long long _unarchiverIdentifier;
    TSPUnknownContent *_unknownContent;
    id <TSPObjectDelegate> _delegate;
}

+ (_Bool)tsp_isTransientObjectIdentifier:(long long)arg1;
@property(nonatomic) __weak id <TSPObjectDelegate> tsp_delegate; // @synthesize tsp_delegate=_delegate;
@property(nonatomic) long long tsp_modifyObjectToken; // @synthesize tsp_modifyObjectToken=_modifyObjectToken;
@property(readonly, nonatomic) TSPUnknownContent *tsp_unknownContent; // @synthesize tsp_unknownContent=_unknownContent;
@property(readonly, nonatomic) long long tsp_unarchiverIdentifier; // @synthesize tsp_unarchiverIdentifier=_unarchiverIdentifier;
@property(nonatomic) long long tsp_identifier; // @synthesize tsp_identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool needsArchiving;
- (void)didFinishUnarchiving;
- (_Bool)dirtiesDocumentPackage;
- (_Bool)allowsDuplicatesOutsideOfDocumentPackage;
@property(readonly, nonatomic) _Bool isCommandObject;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
@property(readonly, nonatomic) unsigned int delayedArchivingPriority;
@property(readonly, nonatomic) _Bool shouldDelayArchiving;
@property(readonly, nonatomic) _Bool allowsImplicitComponentOwnership;
@property(readonly, nonatomic) TSPObject *componentRootObject;
@property(readonly, nonatomic) _Bool storeOutsideObjectArchive;
@property(readonly, nonatomic) _Bool isComponentRoot;
@property(readonly, nonatomic) NSString *packageLocator;
- (void)willModifyForUpgrade;
- (void)willModify;
- (id)initDocumentObjectWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
@property(readonly, nonatomic) TSPObjectContext *context;
- (id)init;
- (id)documentRoot;

@end

