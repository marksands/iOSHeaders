//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXComponentInteractionHandler.h"

@class NSString;

@interface SXWebContentComponentInteractionHandler : NSObject <SXComponentInteractionHandler>
{
    id <SXWebContentInteraction> _interaction;
}

@property(readonly, nonatomic) id <SXWebContentInteraction> interaction; // @synthesize interaction=_interaction;
- (void).cxx_destruct;
- (void)handleInteractionType:(unsigned long long)arg1;
- (id)initWithInteraction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
