//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString;

@interface SACFSignal : SADomainCommand
{
}

+ (id)signalWithDictionary:(id)arg1 context:(id)arg2;
+ (id)signal;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *scriptIdentifiers;
@property(copy, nonatomic) NSString *flowScriptHint;
@property(copy, nonatomic) NSString *domain;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

