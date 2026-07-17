# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-17 (Friday, ~10:25 ET, first update since the OMCL trade executed)**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA and (2) OMCL — both current holdings, numbers refreshed off the trader's own ~09:36-09:37 ET recorded quotes (state.md) rather than rebuilt, per standing practice since nothing material changed in either model; (3) VTI and (4) VXUS — brief refresh, still not applicable for a DCF. GS's current #1 pick (analysts/gs-stock-screener.md, 2026-07-17) is still **OMCL**, now a live holding as of this morning's pre-committed half-size fallback buy — already covered under (2), no new name to add.*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | $200.48 (7/17, ~09:36 ET trader-recorded quote; WebSearch corroborates ~$200-201 at the open, -3.3% to -3.5%) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~24.9% downside to DCF fair value.** Gap narrowed further from 7/16's ~27.7% purely because price fell with the broader chip-sector rout, not because the model got more constructive. |
| **OMCL** | $46.68 (7/17, ~09:37 ET execution price; live quote $46.35/$47.01 at the time) | ~$56.35 (WACC 9%, g 3%) — unchanged model | **MODESTLY UNDERVALUED — ~20.7% upside to DCF fair value.** Margin of safety actually widened slightly vs. 7/16's ~18.4% (price dipped ~1.9% off Thursday's close before the buy). **The pre-committed half-size ($5) fallback executed this morning — this desk flagged in the 7/16 report that a half-size entry would clear comfortably, and it did, at a price that if anything improved the entry's valuation cushion.** |
| **VTI** | $366.00 (7/17, ~09:36 ET trader-recorded quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged from prior reports. |
| **VXUS** | $82.645 (7/17, ~09:36 ET trader-recorded quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged from prior reports. |

**Bottom line for the trader:** No verdict changes this run, and nothing here argues for touching NVDA, VTI, or VXUS today — this morning's move across all three is the same broad chip-sector/AI-valuation selloff already discussed in state.md, not a name-specific catalyst. The one live item is OMCL: the trade this desk anticipated in the 7/16 report has now happened, at a price that left the DCF cushion slightly *better*, not worse, than when the fallback was first sized. Nothing about today's print changes the underlying model — this is a valuation sign-off on an already-executed decision, not a new recommendation.

---

## 1. NVIDIA (NVDA) — brief update, model unchanged

### What changed since 7/16
Price fell from $208.42 (7/16, 09:36 ET) to $200.48 (7/17, 09:36 ET) — a further ~3.8% drop, on top of Thursday's ~1.9% dip, as the chip-sector/AI-capex-valuation selloff entered its third session and deepened materially (per GS's 7/17 report, MU and ALAB both posted real double-digit-percent drawdowns from recent highs this week, not just multiple compression). No NVDA-specific news found this run — WebSearch on export-policy/Blackwell developments turned up only previously-known background (May 2026 export-rule tightening, the H200-to-China trickle Congress was told about on 7/14), nothing dated today that would move the cash-flow build. No change to the FY2027E-FY2031E revenue/margin path, WACC, or terminal growth assumptions.

### Verdict: **OVERVALUED, gap narrowing further on price alone**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base) against today's $200.48 spot:

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Base case ($150.6) implies **~24.9% downside** from $200.48 — the third straight session this gap has narrowed (28.9% on 7/15 → 27.7% on 7/16 → 24.9% today), entirely a function of the sector selloff deepening rather than any model change. Note the DCF is not "catching up" to the stock in any sense that supports adding — a ~25% gap is still a large one, and the mechanism narrowing it (a broad AI-infrastructure-capex repricing hitting real names 20-32% from their own highs, per GS's 7/17 report on MU/ALAB) is itself a reason for caution, not comfort. Key breakable assumptions unchanged (margin durability is the upside break; China export policy, Blackwell-Rubin execution, HBM supply bottleneck remain the downside breaks — full writeup via git history, 7/10 report). **Still a hold-for-other-reasons position, not an add**, and today's sector-wide (not NVDA-specific) selloff doesn't clear the "fresh catalyst" bar needed to revisit the existing position either way.

---

## 2. Omnicell (OMCL) — brief update, trade sign-off

### What changed since 7/16
Price dipped from $47.60 (7/16, 09:36 ET) to $46.68 (7/17, ~09:37 ET execution price; live quote $46.35/$47.01 at placement) — a ~1.9% pullback, the first down move for the name after four straight up sessions, and per state.md notably decoupled from the broader chip-sector selloff hitting NVDA/VTI/VXUS the same morning. No company-specific news since the 7/14 build: next earnings still 7/30 (13 days out per JPM's 7/17 brief), guidance unchanged. **The trader executed the pre-committed half-size ($5.00, ~0.107 sh est.) fallback this morning** — the Friday time-box set 7/13 fired as designed, with neither de-escalation trigger (ceasefire holding, Brent <~$75) having met its bar.

**Data-quality note, recurring**: today's WebSearch again surfaced the same stale/conflicting $43.01 figure that GS's 7/17 report already flagged as unreliable this morning — do not size off it. The trade log's execution price ($46.68, bracketed by a $46.35/$47.01 live quote at placement) is the authoritative figure for this update.

### Sensitivity table — fair value per share (unchanged)

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 7% | $70.30 | $85.26 | $110.19 |
| 8% | $58.30 | $67.90 | $82.31 |
| **9% (base)** | $49.73 | **$56.35** | $65.60 |
| 10% | $43.33 | $48.11 | $54.50 |
| 11% | $38.36 | $41.95 | $46.56 |

### DCF vs. market price
Base case ($56.35) implies **~20.7% upside** from the $46.68 execution price — up from ~18.4% on 7/16, the first improvement in the margin-of-safety trend after three straight days of compression. All 15 sensitivity cells except the two most conservative (10%/2%, 11%/2%, 11%/3%) still sit at or above the entry price.

### Verdict: **MODESTLY UNDERVALUED — sign-off on today's executed entry**
This desk flagged in the 7/16 report that "a half-size entry would still likely clear even [at a higher price]" — the trader instead got a small pullback, so the entry cleared with more room, not less. Nothing here calls for adding to the position beyond the half-size already placed; the model was built and sized for exactly this scenario, and it played out cleanly. Re-evaluate for a possible second tranche only on a fresh catalyst (post-7/30 earnings, a further pullback toward GS's $42-46 zone, or a material re-rating of the healthcare-rotation thesis) — not simply because the position is open.

### Key assumptions that could break this model (unchanged)
- **Upside break**: back-half FY2026 revenue tracking closer to Q1's +14.9% pace than the guided ~4.2%, with margin expansion continuing at the Q1 rate — plausibly pushes fair value into the $65-85 range.
- **Downside break**: JPM's 7/17 flag that Q2's setup is "objectively tighter than Q1's blowout" (consensus now sits inside guidance rather than well below it) is the most relevant near-term risk — a merely in-line 7/30 print, not even a miss, could read as a disappointment after four straight quarters of blowout beats. A renewed rate-hike cycle or health-system capex pullback hitting bookings before it shows in trailing revenue remains the other downside path.

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only

No change to the standing "not applicable" treatment. Price ($366.00, 7/17 09:36 ET) is down ~1.24% on the day, part of the same broad chip-sector/AI-valuation selloff hitting NVDA. No view offered on adding to or trimming this position — that's BR's lane, not a DCF call. Substitute lens unchanged from prior reports (git history).

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only

No change to the standing "not applicable" treatment. Price ($82.645, 7/17 09:36 ET) is down ~1.68% on the day — the third straight session VXUS has moved with the same chip-sector selloff via its TSMC/Samsung/SK Hynix exposure, exactly the semiconductor-overlap caveat this desk and BW have both flagged since the position was opened. No DCF-based case to add or trim.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-17)
GS's 7/17 report confirms today's OMCL entry was the correct, pre-committed action (fallback size, not full size), and independently corroborates this desk's read that today's WebSearch price for OMCL is unreliable ($43.01 vs. a same-morning $46.51/+3.54% read, neither cleanly reconcilable with yesterday's Robinhood-verified close). Full agreement on direction and mechanics. On NVDA, GS doesn't re-screen it as a new idea this cycle; both desks read today's selloff as sector-wide (now with real evidence — GS cites MU down ~32% from its June ATH and ALAB down ~21.6% in a week), not NVDA-specific, so it doesn't clear the bar to revisit the existing position. GS's OXY (#2) and PTCT (#3) remain outside this report's coverage per the standing one-cycle-old vetting gate. GS introduced a new #10 idea (GEHC) this cycle with an explicit flag that it needs an MS/BW vetting cycle before sizing — noting for next cycle, not building a DCF on it yet given it's a caution-flagged watchlist name, not an actionable pick.

## Explicit read on trader's current positions (NVDA, VTI, VXUS, OMCL)
**NVDA**: unchanged — DCF does not support adding at $200.48; existing ~$5 notional position isn't worth trading out of on valuation grounds given the "no trade without a fresh catalyst" discipline, and today's drop is sector-wide, not a catalyst specific to the name.
**VTI**: hold, no valuation view — diversified core-sleeve buy, not a DCF call.
**VXUS**: hold, no valuation view — same treatment as VTI; today's move is the same sector-wide chip selloff via look-through exposure, not a name-specific development.
**OMCL**: now a live holding as of this morning. DCF sign-off: the half-size entry executed at a price that improved, not worsened, the model's margin of safety versus yesterday's read. No case to add or trim right now; the next valuation-relevant checkpoint is the 7/30 earnings print JPM has flagged as a tighter setup than Q1's blowout.
