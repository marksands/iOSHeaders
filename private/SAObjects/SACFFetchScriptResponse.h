//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SACFFetchScriptResponse : SABaseClientBoundCommand
{
}

+ (id)fetchScriptResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)fetchScriptResponse;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *flowScripts;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

