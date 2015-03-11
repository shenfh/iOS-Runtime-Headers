/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSString;

@interface NNMKProtoMessageDeletion : PBCodable <NSCopying> {
    struct { 
        unsigned int deletionState : 1; 
    unsigned int _deletionState;
    } _has;
    NSString *_messageId;
}

@property unsigned int deletionState;
@property bool hasDeletionState;
@property(readonly) bool hasMessageId;
@property(retain) NSString * messageId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)deletionState;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeletionState;
- (bool)hasMessageId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (bool)readFrom:(id)arg1;
- (void)setDeletionState:(unsigned int)arg1;
- (void)setHasDeletionState:(bool)arg1;
- (void)setMessageId:(id)arg1;
- (void)writeTo:(id)arg1;

@end