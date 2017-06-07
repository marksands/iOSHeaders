//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCDefinitionContainer-Protocol.h>
#import <NewsCore/FCRegistrationContainer-Protocol.h>

@class FCContainerPool, NSMutableDictionary, NSString;
@protocol FCResolver;

@interface FCContainer : NSObject <FCDefinitionContainer, FCRegistrationContainer>
{
    id <FCResolver> _resolver;
    NSMutableDictionary *_definitions;
    FCContainerPool *_pool;
    NSMutableDictionary *_privateContainers;
}

@property(retain, nonatomic) NSMutableDictionary *privateContainers; // @synthesize privateContainers=_privateContainers;
@property(retain, nonatomic) FCContainerPool *pool; // @synthesize pool=_pool;
@property(retain, nonatomic) NSMutableDictionary *definitions; // @synthesize definitions=_definitions;
@property(retain, nonatomic) id <FCResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (void)validateDefinitionsWithResolver:(id)arg1;
- (id)register:(id)arg1 name:(id)arg2 createDefinitionBlock:(CDUnknownBlockType)arg3;
- (id)definitionForKey:(id)arg1;
- (id)registerProtocol:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)registerProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)registerClass:(Class)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)registerClass:(Class)arg1 factory:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *debugDescription;
- (id)initAsPrivateContainer;
- (id)initWithAssemblies:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

