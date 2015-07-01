/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMPTCPSubflowSwitchingReport : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int switchCount : 1; 
    } _has;
    int _switchCount;
    NSString *_switchFromInterfaceName;
    NSString *_switchToInterfaceName;
    unsigned long long _timestamp;
}

@property (nonatomic) BOOL hasSwitchCount;
@property (nonatomic, readonly) BOOL hasSwitchFromInterfaceName;
@property (nonatomic, readonly) BOOL hasSwitchToInterfaceName;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int switchCount;
@property (nonatomic, retain) NSString *switchFromInterfaceName;
@property (nonatomic, retain) NSString *switchToInterfaceName;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSwitchCount;
- (BOOL)hasSwitchFromInterfaceName;
- (BOOL)hasSwitchToInterfaceName;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasSwitchCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setSwitchCount:(int)arg1;
- (void)setSwitchFromInterfaceName:(id)arg1;
- (void)setSwitchToInterfaceName:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)switchCount;
- (id)switchFromInterfaceName;
- (id)switchToInterfaceName;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end